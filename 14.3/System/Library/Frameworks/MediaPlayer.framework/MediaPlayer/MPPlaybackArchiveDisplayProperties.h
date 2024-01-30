@class NSString, NSMutableDictionary, NSData;

@interface MPPlaybackArchiveDisplayProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *storage;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSData *artworkImageData;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 artworkImageData:(id)a2;
- (id)copyWithOptions:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
