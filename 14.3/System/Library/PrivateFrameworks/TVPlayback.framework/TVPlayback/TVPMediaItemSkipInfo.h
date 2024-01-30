@class NSString;

@interface TVPMediaItemSkipInfo : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) double start;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double target;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *skipIntroReportingType;

- (void).cxx_destruct;
- (id)description;
- (id)_typeDescription;
- (id)initWithType:(unsigned long long)a0 start:(double)a1 duration:(double)a2 target:(double)a3 localizedTitle:(id)a4 skipIntroReportingType:(id)a5;

@end
