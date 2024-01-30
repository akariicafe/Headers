@class NSString, NSSet;

@interface _EAROovToken : NSObject

@property (readonly, nonatomic) NSString *orthography;
@property (readonly, nonatomic) NSSet *prons;
@property (readonly, nonatomic) int frequency;

- (void).cxx_destruct;
- (id)initWithOrthography:(id)a0 prons:(id)a1 frequency:(int)a2;

@end
