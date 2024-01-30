@class NSString;

@interface SXVideoFill : SXFill

@property (readonly, nonatomic) NSString *stillImageIdentifier;
@property (readonly, nonatomic) NSString *resourceIdentifier;
@property (readonly, nonatomic) BOOL loop;

- (BOOL)loopWithValue:(id)a0 withType:(int)a1;

@end
