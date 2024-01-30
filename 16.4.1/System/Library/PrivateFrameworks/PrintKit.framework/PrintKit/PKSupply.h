@class NSString, NSArray;

@interface PKSupply : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *markerType;
@property (retain, nonatomic) NSArray *colors;
@property (nonatomic) int level;
@property (nonatomic) int lowLevel;
@property (nonatomic) int highLevel;
@property (nonatomic) unsigned long long supplyType;

+ (BOOL)isValidColorString:(const char *)a0;
+ (unsigned long long)numRequiredIPPAttributes;
+ (const char **)requiredIPPAttributes;
+ (id)suppliesForIPPResponse:(struct _ipp_s { } *)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(const char *)a0 markerType:(const char *)a1 colors:(const char *)a2 level:(int)a3 lowLevel:(int)a4 highLevel:(int)a5;

@end
