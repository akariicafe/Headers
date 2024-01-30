@class NSString;

@interface FMFSAMyLocation : FMFSALocation

@property (nonatomic) BOOL isVisible;
@property (retain, nonatomic) NSString *username;

+ (id)bundle;
+ (id)myLocation:(BOOL)a0 andDictionary:(id)a1 preferredEmail:(id)a2;
+ (id)myLocation:(BOOL)a0 siriLocation:(id)a1 preferredEmail:(id)a2;

- (void).cxx_destruct;
- (id)initWithMyLocation:(BOOL)a0 siriLocation:(id)a1 preferredEmail:(id)a2;
- (id)initWithMyLocation:(BOOL)a0 andDictionary:(id)a1 preferredEmail:(id)a2;
- (id)prettyTimestamp;

@end
