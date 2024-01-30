@class NSUUID, NSDate, NSObject;
@protocol OS_nw_activity, NSCopying;

@interface AVCSessionConfiguration : NSObject {
    long long _sessionMode;
}

@property (nonatomic) long long sessionMode;
@property (copy, nonatomic) NSObject<NSCopying> *reportingHierarchyToken;
@property (nonatomic, getter=isOneToOneModeEnabled) BOOL oneToOneModeEnabled;
@property (nonatomic, setter=setParentNWActivity:) NSObject<OS_nw_activity> *parentNWActivity;
@property (copy, nonatomic) NSUUID *conversationID;
@property (copy, nonatomic) NSDate *conversationTimeBase;
@property (copy, nonatomic) NSDate *conversationTimeBaseTruncated;

+ (long long)clientSessionModeWithSessionMode:(long long)a0;
+ (long long)sessionModeWithClientSessionMode:(long long)a0;

- (id)dictionary;
- (void)dealloc;
- (void)cleanupNwActivity;
- (void)setUpWithDictionary:(id)a0;
- (id)deserializeNwActivity:(id)a0;
- (id)serializeNwActivity:(id)a0;

@end
