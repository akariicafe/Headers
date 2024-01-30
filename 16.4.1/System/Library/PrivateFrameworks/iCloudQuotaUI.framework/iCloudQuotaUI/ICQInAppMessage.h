@class NSString, NSArray;

@interface ICQInAppMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, copy, nonatomic) NSString *sfSymbolName;
@property (readonly, nonatomic) NSArray *actions;

+ (id)airplaneMode;
+ (id)quotaAlmostFull;
+ (id)quotaFull;
+ (id)serverUnreachable;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentType:(unsigned long long)a0 identifier:(id)a1 title:(id)a2 subTitle:(id)a3 sfSymbolName:(id)a4 actions:(id)a5;

@end
