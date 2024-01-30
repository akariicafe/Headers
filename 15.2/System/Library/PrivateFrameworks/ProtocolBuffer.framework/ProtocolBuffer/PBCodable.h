@class NSData;

@interface PBCodable : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;

+ (id)options;

- (id)formattedText;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)dictionaryRepresentation;

@end
