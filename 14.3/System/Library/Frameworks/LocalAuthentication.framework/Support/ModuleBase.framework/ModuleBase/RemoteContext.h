@class NSUUID, NSString;
@protocol LARemoteContextOwnership;

@interface RemoteContext : NSObject <LARemoteContextOwnership> {
    NSString *_description;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) id<LARemoteContextOwnership> ownership;
@property (nonatomic) unsigned long long acmExternalizedFormHash;
@property (readonly, nonatomic) RemoteContext *originalOwnership;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithOwnership:(id)a0 uuid:(id)a1 description:(id)a2 originalOwnership:(id)a3;

@end
