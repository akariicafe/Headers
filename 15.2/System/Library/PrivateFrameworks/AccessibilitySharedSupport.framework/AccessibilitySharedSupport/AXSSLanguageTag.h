@class NSString, AXSSDialectMap, NSMutableOrderedSet;

@interface AXSSLanguageTag : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } taggedRange;
@property (readonly, copy, nonatomic) NSString *taggedString;
@property (nonatomic) long long offsetToInitialLocation;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, nonatomic) AXSSDialectMap *dialect;
@property (readonly, nonatomic) BOOL createdFromNewline;
@property (retain, nonatomic) NSMutableOrderedSet *predictedSecondaryDialects;

- (void)addPredictedSecondaryDialects:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDialect:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 content:(id)a2 createdFromNewline:(BOOL)a3;

@end
