@class NSString;

@interface WBBookmarkLabel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTitle:(id)a0 address:(id)a1 pinned:(BOOL)a2;
- (id)labelWithAddress:(id)a0;
- (id)init;
- (id)labelWithPinned:(BOOL)a0;
- (id)description;
- (id)labelWithTitle:(id)a0;
- (void).cxx_destruct;

@end
