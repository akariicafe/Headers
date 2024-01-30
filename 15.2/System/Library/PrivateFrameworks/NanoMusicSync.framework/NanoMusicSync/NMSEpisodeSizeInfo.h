@interface NMSEpisodeSizeInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic, getter=isDownloaded) BOOL downloaded;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSize:(unsigned long long)a0 duration:(double)a1 downloaded:(BOOL)a2;

@end
