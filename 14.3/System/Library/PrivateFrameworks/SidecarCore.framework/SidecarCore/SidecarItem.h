@class NSData, NSString;

@interface SidecarItem : NSObject

@property (readonly, copy) id objectValue;
@property (readonly) NSData *data;
@property (readonly) NSString *type;

- (void).cxx_destruct;
- (id)description;
- (BOOL)conformsToType:(id)a0;
- (id)debugDescription;
- (id)initWithData:(id)a0 type:(id)a1;
- (id)initWithObject:(id)a0 type:(id)a1;

@end
