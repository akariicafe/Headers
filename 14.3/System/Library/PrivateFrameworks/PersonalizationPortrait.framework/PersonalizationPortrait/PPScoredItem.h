@class NSObject;
@protocol NSSecureCoding, NSCopying;

@interface PPScoredItem : _PASZonedObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned short resultPosition;
@property (readonly, nonatomic) unsigned short resultCount;
@property (readonly, nonatomic) NSObject<NSCopying, NSSecureCoding> *item;
@property (readonly, nonatomic) double score;

- (BOOL)isEqualToScoredItem:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithItem:(id)a0 score:(double)a1 resultPosition:(unsigned short)a2 resultCount:(unsigned short)a3;
- (id)initWithItem:(id)a0 score:(double)a1;
- (void)encodeWithCoder:(id)a0;

@end
