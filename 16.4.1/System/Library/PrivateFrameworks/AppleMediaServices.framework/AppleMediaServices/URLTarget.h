@class NSString;

@interface URLTarget : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) long long defaultIndex;
@property (retain, nonatomic) NSString *normalScheme;
@property (retain, nonatomic) NSString *secureScheme;

+ (id)targetWithBundle:(id)a0 scheme:(id)a1 secureScheme:(id)a2;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0 scheme:(id)a1 secureScheme:(id)a2;

@end
