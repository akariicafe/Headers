@class NSString;

@interface FCIssueOverrides : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *issueDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 issueDescription:(id)a1;

@end
