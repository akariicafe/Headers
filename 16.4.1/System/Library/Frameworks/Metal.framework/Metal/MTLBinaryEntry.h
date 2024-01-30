@class NSArray, NSObject;
@protocol OS_dispatch_data;

@interface MTLBinaryEntry : NSObject

@property (readonly) NSObject<OS_dispatch_data> *data;
@property (readonly) NSArray *importedSymbols;
@property (readonly) NSArray *importedLibraries;
@property NSObject<OS_dispatch_data> *airntData;
@property unsigned long long index;

- (void)dealloc;
- (id)description;
- (id)initWithData:(id)a0 importedSymbols:(id)a1 importedLibraries:(id)a2;

@end
