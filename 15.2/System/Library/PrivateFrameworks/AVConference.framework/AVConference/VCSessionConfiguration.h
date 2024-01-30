@class NSUUID, NSDate, NSObject;
@protocol OS_nw_activity, NSCopying;

@interface VCSessionConfiguration : NSObject

@property (nonatomic) long long sessionMode;
@property (retain, nonatomic) NSObject<NSCopying> *reportingHierarchyToken;
@property (nonatomic, getter=isOneToOneModeEnabled) BOOL oneToOneModeEnabled;
@property (nonatomic) BOOL isGKVoiceChat;
@property (copy, nonatomic) NSUUID *conversationID;
@property (copy, nonatomic) NSDate *conversationTimeBase;
@property (copy, nonatomic) NSDate *conversationTimeBaseTruncated;
@property (nonatomic, setter=setParentNWActivity:) NSObject<OS_nw_activity> *parentNWActivity;

- (id)init;
- (void)dealloc;
- (void)cleanupNwActivity;
- (BOOL)applyConfigurationUsingClientDict:(id)a0;
- (id)initWithClientDictionary:(id)a0;
- (BOOL)updateWithClientDictionary:(id)a0;

@end
