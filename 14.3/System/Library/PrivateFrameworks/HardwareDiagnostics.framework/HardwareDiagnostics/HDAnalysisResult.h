@class NSMutableArray, NSMutableDictionary;

@interface HDAnalysisResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *measuredResults;
@property (readonly, nonatomic) NSMutableDictionary *auxiliaryData;
@property (readonly, nonatomic) NSMutableDictionary *files;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToAnalysisResult:(id)a0;

@end
