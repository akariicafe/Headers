@class NSString;

@interface TTFont : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id nativeFont;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double pointSize;
@property (readonly, nonatomic) unsigned int fontHints;

- (void)encodeWithCoder:(id)a0;
- (id)serialize;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const void *)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)saveToArchive:(void *)a0;
- (id)initWithName:(id)a0 size:(double)a1 hints:(unsigned int)a2;

@end
