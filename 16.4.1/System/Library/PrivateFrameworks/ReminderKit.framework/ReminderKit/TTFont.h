@class NSString;

@interface TTFont : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id nativeFont;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double pointSize;
@property (readonly, nonatomic) unsigned int fontHints;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithArchive:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)serialize;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 size:(double)a1 hints:(unsigned int)a2;
- (void)saveToArchive:(void *)a0;

@end
