@class NSNumber, NSString;

@interface CRKConcreteFileDescriptor : NSObject <CRKFileDescriptor>

@property (retain, nonatomic) NSNumber *backingValue;
@property (readonly, nonatomic) int rawValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (id)initWithRawValue:(int)a0;
- (BOOL)changeFlags:(unsigned int)a0 error:(id *)a1;
- (BOOL)fetchFlags:(unsigned int *)a0 error:(id *)a1;

@end
