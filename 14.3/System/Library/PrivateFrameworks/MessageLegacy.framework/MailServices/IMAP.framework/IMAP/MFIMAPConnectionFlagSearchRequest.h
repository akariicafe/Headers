@class NSArray;

@interface MFIMAPConnectionFlagSearchRequest : NSObject

@property (readonly, nonatomic) unsigned long long mask;
@property (readonly, nonatomic) NSArray *searchTerms;
@property (readonly, nonatomic) BOOL isPositiveMatch;

+ (id)requestWithMask:(unsigned long long)a0 searchTerms:(id)a1 positiveMatch:(BOOL)a2;

- (void)dealloc;
- (id)initWithMask:(unsigned long long)a0 searchTerms:(id)a1 positiveMatch:(BOOL)a2;

@end
