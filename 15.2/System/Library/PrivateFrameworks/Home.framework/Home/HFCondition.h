@class NSPredicate, NSString;

@interface HFCondition : NSObject <NAEquatable>

@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)homeKitRepresentationClass;

- (id)initWithPredicate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)hf_naturalLanguageSummaryWithOptions:(id)a0;

@end
