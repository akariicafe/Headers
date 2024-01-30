@class NSObject;
@protocol NSCopying;

@interface AVCSessionConfiguration : NSObject {
    long long _sessionMode;
}

@property (nonatomic) long long sessionMode;
@property (copy, nonatomic) NSObject<NSCopying> *reportingHierarchyToken;
@property (nonatomic, getter=isOneToOneModeEnabled) BOOL oneToOneModeEnabled;

+ (long long)clientSessionModeWithSessionMode:(long long)a0;
+ (long long)sessionModeWithClientSessionMode:(long long)a0;

- (id)dictionary;
- (void)dealloc;
- (void)setUpWithDictionary:(id)a0;

@end
