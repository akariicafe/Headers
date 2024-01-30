@class NSString, NSArray;

@interface PKSupply : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *markerType;
@property (retain, nonatomic) NSArray *colors;
@property (nonatomic) int level;
@property (nonatomic) int lowLevel;
@property (nonatomic) int highLevel;
@property (nonatomic) unsigned long long supplyType;

+ (id)suppliesForIPPResponse:(struct _ipp_s { } *)a0;
+ (const char **)requiredIPPAttributes;
+ (unsigned long long)numRequiredIPPAttributes;
+ (BOOL)isValidColorString:(const char *)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(const char *)a0 markerType:(const char *)a1 colors:(const char *)a2 level:(int)a3 lowLevel:(int)a4 highLevel:(int)a5;

@end
