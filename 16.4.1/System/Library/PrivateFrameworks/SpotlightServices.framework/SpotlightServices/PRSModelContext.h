@class PRSDirectivesManager, NSString, SSCoreMLInterface;

@interface PRSModelContext : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) SSCoreMLInterface *model;
@property (retain, nonatomic) PRSDirectivesManager *directivesManager;
@property (retain, nonatomic) NSString *version;

- (id)initWithModel:(id)a0 directivesManager:(id)a1 type:(unsigned long long)a2;
- (void).cxx_destruct;

@end
