@class NSString, NSArray;

@interface CALNNotificationCategory : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder;
@property (readonly, copy, nonatomic) NSString *categorySummaryFormat;

+ (id)categoryWithIdentifier:(id)a0 actions:(id)a1 hiddenPreviewsBodyPlaceholder:(id)a2 options:(unsigned long long)a3;
+ (id)categoryWithIdentifier:(id)a0 actions:(id)a1 hiddenPreviewsBodyPlaceholder:(id)a2 options:(unsigned long long)a3 categorySummaryFormat:(id)a4;

- (BOOL)isEqualToCategory:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 actions:(id)a1 hiddenPreviewsBodyPlaceholder:(id)a2 options:(unsigned long long)a3 categorySummaryFormat:(id)a4;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
