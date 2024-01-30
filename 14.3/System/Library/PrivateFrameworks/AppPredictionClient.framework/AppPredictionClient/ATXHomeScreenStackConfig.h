@class NSArray, NSString, ATXHomeScreenPage;

@interface ATXHomeScreenStackConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowsNewWidget;
@property (nonatomic) BOOL allowsSmartRotate;
@property (copy, nonatomic) NSArray *widgets;
@property (nonatomic) unsigned long long stackLayoutSize;
@property (nonatomic) long long coordinateRow;
@property (nonatomic) long long coordinateColumn;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) ATXHomeScreenPage *page;

- (id)compactDescription;
- (id)initFromDictionaryRepresentation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
