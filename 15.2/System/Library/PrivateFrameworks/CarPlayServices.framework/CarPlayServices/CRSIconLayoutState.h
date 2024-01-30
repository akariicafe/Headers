@class NSString, NSArray;

@interface CRSIconLayoutState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *oemIconLabel;
@property (nonatomic) BOOL displaysOEMIcon;
@property (nonatomic) unsigned long long rows;
@property (nonatomic) unsigned long long columns;
@property (readonly, nonatomic) NSArray *pages;
@property (readonly, nonatomic) NSArray *hiddenIcons;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPages:(id)a0 hiddenIcons:(id)a1;
- (id)iconOrder;

@end
