@class NSArray, NSDictionary, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface MNTrace : NSObject {
    NSMutableArray *_preparedStatements;
}

@property (readonly, nonatomic) struct sqlite3 { } *db;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *writeQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *writeGroup;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long originalVersion;
@property (nonatomic) BOOL isSimulation;
@property (retain, nonatomic) NSArray *locations;
@property (retain, nonatomic) NSArray *directions;
@property (retain, nonatomic) NSArray *etaUpdates;
@property (retain, nonatomic) NSArray *headingData;
@property (retain, nonatomic) NSArray *motionData;
@property (retain, nonatomic) NSArray *vehicleHeadingData;
@property (retain, nonatomic) NSArray *vehicleSpeedData;
@property (retain, nonatomic) NSArray *evData;
@property (retain, nonatomic) NSArray *navigationEvents;
@property (retain, nonatomic) NSArray *annotatedUserBehavior;
@property (retain, nonatomic) NSArray *annotatedUserEnvironments;
@property (retain, nonatomic) NSArray *navigationUpdates;
@property (retain, nonatomic) NSArray *bookmarks;
@property (retain, nonatomic) NSArray *bookmarkImages;
@property (retain, nonatomic) NSDictionary *miscInfo;
@property (readonly, nonatomic) NSString *tracePath;
@property (readonly, nonatomic) int mainTransportType;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_handleOpenErrorWithPath:(id)a0;
- (BOOL)closeTrace;
- (BOOL)openTrace:(id)a0 outError:(id *)a1;
- (id)prepareStatement:(id)a0 outError:(out id *)a1;
- (id)serializableBookmarks;
- (BOOL)startWritingTraceToPath:(id)a0;

@end
