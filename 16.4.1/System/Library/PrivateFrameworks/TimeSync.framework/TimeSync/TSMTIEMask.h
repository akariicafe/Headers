@class NSArray, NSString;

@interface TSMTIEMask : NSObject

@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) NSString *name;

+ (id)UDPSoftwareMask;
+ (id)UDPHardwareMask;
+ (id)gPTP1Hop;
+ (id)gPTP7Hop;
+ (id)gPTPMask1;
+ (id)gPTPMask2;
+ (id)gPTPMask3;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)mtieConformsToMask:(id)a0 withErrors:(id *)a1;
- (id)mtieMaskFromStart:(double)a0 toEnd:(double)a1 withStep:(double)a2;

@end
