@class NSString;

@interface PPFeedbackItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *itemString;
@property (readonly, nonatomic) unsigned int itemFeedbackType;

+ (id)stringForItemFeedbackType:(unsigned int)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithItemString:(id)a0 itemFeedbackType:(unsigned int)a1;
- (BOOL)isEqualToPPFeedbackItem:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
