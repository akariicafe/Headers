@class NSString, UIFont;

@interface SPFont : NSObject <NSSecureCoding, NSKeyedUnarchiverDelegate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)unarchiver:(id)a0 didDecodeObject:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFont:(id)a0;

@end
