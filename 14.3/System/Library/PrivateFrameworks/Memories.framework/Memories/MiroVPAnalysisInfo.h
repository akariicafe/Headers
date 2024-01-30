@class NSArray, NSDate;
@protocol MiroVPMetadataRangeMergeable;

@interface MiroVPAnalysisInfo : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) unsigned long long performedAnalysisTypes;
@property (readonly, nonatomic) long long analysisVersion;
@property (readonly, nonatomic) NSDate *performedAnalysisDate;
@property (readonly, nonatomic) double qualityScore;
@property (readonly, nonatomic) double junkScore;
@property (readonly, nonatomic) NSArray<MiroVPMetadataRangeMergeable> *ranges;
@property (retain, nonatomic) id context;

+ (id)analysisInfoWithFlags:(unsigned long long)a0 analysisVersion:(long long)a1 performedAnalysisTypes:(unsigned long long)a2 performedAnalysisDate:(id)a3 qualityScore:(double)a4 junkScore:(double)a5 ranges:(id)a6;
+ (id)descriptionForAnalysisTypes:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
