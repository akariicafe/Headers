@class NSMutableDictionary;

@interface HDExperimentResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *measurements;
@property (readonly, nonatomic) NSMutableDictionary *auxiliaryData;
@property (readonly, nonatomic) NSMutableDictionary *files;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToExperimentResult:(id)a0;

@end
