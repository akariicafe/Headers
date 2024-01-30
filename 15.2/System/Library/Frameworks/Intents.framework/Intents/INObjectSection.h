@class NSString, NSArray;

@interface INObjectSection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *_identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *items;

- (void)encodeWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 items:(id)a1;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 items:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
