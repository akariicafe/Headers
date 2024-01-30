@class NSObject;
@protocol NSSecureCoding, NSCopying;

@interface PPScoredItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned short resultPosition;
@property (readonly, nonatomic) unsigned short resultCount;
@property (readonly, nonatomic) NSObject<NSCopying, NSSecureCoding> *item;
@property (readonly, nonatomic) double score;

- (void)encodeWithCoder:(id)a0;
- (id)initWithItem:(id)a0 score:(double)a1 resultPosition:(unsigned short)a2 resultCount:(unsigned short)a3;
- (BOOL)isEqualToScoredItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithItem:(id)a0 score:(double)a1;

@end
