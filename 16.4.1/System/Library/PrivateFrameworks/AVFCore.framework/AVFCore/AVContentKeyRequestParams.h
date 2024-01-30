@class NSData, NSDictionary;

@interface AVContentKeyRequestParams : NSObject

@property (copy) NSData *initializationData;
@property (copy) NSData *contentIdentifier;
@property (copy) NSData *keyIDFromInitializationData;
@property (copy) NSDictionary *options;
@property (copy) id identifier;

- (void)dealloc;
- (id)initWithInitializationData:(id)a0 contentIdentifier:(id)a1 keyIDFromInitializationData:(id)a2 options:(id)a3 identifier:(id)a4;

@end
