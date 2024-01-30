@class NSSet, NSBundle, NSString;

@interface ACDPluginEntry : NSObject <ACDPluginEntryProtocol> {
    id _principalObject;
    NSSet *_supportedAccountTypes;
    NSSet *_supportedDataclasses;
    NSString *_identifier;
    struct { unsigned char principalObject : 1; unsigned char supportedAccountTypes : 1; unsigned char supportedDataclasses : 1; unsigned char identifier : 1; } _fetchedFlags;
}

@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) id principalObject;
@property (readonly, nonatomic) NSSet *supportedAccountTypes;
@property (readonly, nonatomic) NSSet *supportedDataclasses;
@property (readonly, nonatomic) NSString *identifier;

- (id)initWithBundle:(id)a0;
- (BOOL)principalObjectRespondsToSelector:(SEL)a0;
- (id)debugDescription;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
