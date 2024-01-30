@class NSArray, NSDictionary, NSData, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface MNTrace : NSObject

@property (readonly, nonatomic) struct sqlite3 { } *db;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *writeQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *writeGroup;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long originalVersion;
@property (nonatomic) BOOL isSimulation;
@property (nonatomic) BOOL isRouteGenius;
@property (nonatomic) BOOL usesCLMapCorrection;
@property (nonatomic) double initialCourse;
@property (retain, nonatomic) NSArray *locations;
@property (retain, nonatomic) NSArray *directions;
@property (retain, nonatomic) NSArray *etaUpdates;
@property (retain, nonatomic) NSArray *headingData;
@property (retain, nonatomic) NSArray *motionData;
@property (retain, nonatomic) NSArray *vehicleHeadingData;
@property (retain, nonatomic) NSArray *vehicleSpeedData;
@property (retain, nonatomic) NSData *startWaypointData;
@property (retain, nonatomic) NSData *endWaypointData;
@property (retain, nonatomic) NSArray *routeSelections;
@property (retain, nonatomic) NSArray *navigationEvents;
@property (retain, nonatomic) NSArray *annotatedUserBehavior;
@property (retain, nonatomic) NSArray *annotatedUserEnvironments;
@property (retain, nonatomic) NSArray *bookmarks;
@property (retain, nonatomic) NSArray *bookmarkImages;
@property (retain, nonatomic) NSArray *commuteDestinations;
@property (retain, nonatomic) NSArray *commuteDirectionsRequests;
@property (retain, nonatomic) NSDictionary *miscInfo;
@property (readonly, nonatomic) NSString *tracePath;
@property (nonatomic) BOOL copyToCrashReporter;
@property (readonly, nonatomic) int mainTransportType;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)createTempTraceForRecording;
- (BOOL)startWritingTraceToPath:(id)a0;
- (BOOL)openTrace:(id)a0 outError:(id *)a1;
- (BOOL)closeTrace;
- (BOOL)startWritingTraceToFile:(id)a0;
- (void)copyTraceToCrashReporter;
- (id)serializableBookmarks;
- (id)_handleOpenErrorWithPath:(id)a0;

@end
