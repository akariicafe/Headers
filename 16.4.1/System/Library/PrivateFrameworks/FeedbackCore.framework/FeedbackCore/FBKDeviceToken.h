@interface FBKDeviceToken : NSObject

+ (id)_basicParameterWithoutLabel;
+ (id)_basicParametersForWriting;
+ (id)_queryForParticipantID:(id)a0 isForWriting:(BOOL)a1;
+ (void)clearAllDeviceTokens;
+ (void)clearDeviceTokenForParticipantID:(id)a0;
+ (id)fetchDeviceTokenForParticipantID:(id)a0;
+ (void)setDeviceToken:(id)a0 forParticipantID:(id)a1;

@end
