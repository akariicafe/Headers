@class NSString, NSDictionary;

@interface MIOModelLayer : NSObject {
    NSDictionary *_layerHistogram;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *type;

- (id)initWithName:(id)a0 type:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMessageStream:(struct CodedInputStream { char *x0; char *x1; struct ZeroCopyInputStream *x2; int x3; int x4; unsigned int x5; BOOL x6; BOOL x7; int x8; int x9; int x10; int x11; int x12; BOOL x13; struct DescriptorPool *x14; struct MessageFactory *x15; } *)a0 error:(id *)a1;
- (id)initWithName:(id)a0 type:(id)a1 histogram:(id)a2;
- (id)layerHistogram;

@end
