@class NSArray, NSSet, NSString, SidecarDevice;

@interface SidecarService : NSObject {
    SidecarDevice *_targetDevice;
}

@property (class, readonly, nonatomic) NSArray *returnTypes;
@property (class, readonly, nonatomic) long long minimumRapportVersion;
@property (class, readonly, nonatomic) NSArray *allServices;
@property (class, readonly, nonatomic) NSArray *allMenuServices;
@property (class, readonly, nonatomic) NSSet *allReturnTypes;
@property (class, readonly, nonatomic) NSSet *allSendTypes;
@property (class, retain, nonatomic) NSSet *supportedPasteboardTypes;

@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) NSString *serviceExtension;
@property (readonly, nonatomic) NSString *localizedItemName;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSArray *returnTypes;
@property (readonly, nonatomic) NSArray *sendTypes;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *pasteboardTypes;
@property (readonly, nonatomic) NSString *localizedDescription;

+ (id)extensionForIdentifier:(id)a0;
+ (id)returnTypes;
+ (id)name;
+ (id)serviceWithName:(id)a0;
+ (id)services;
+ (id)supportedPasteboardTypes;
+ (id)serviceWithIdentifier:(id)a0;
+ (id)menuServices;
+ (id)servicesForPasteboardSendTypes:(id)a0 returnTypes:(id)a1;
+ (id)allReturnTypes;
+ (id)servicesForPasteboardTypes:(id)a0;
+ (id)allSendTypes;

- (id)initWithDevice:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)makeRequest;
- (id)mutableRequestMessage;
- (id)sendTypes;
- (id)makeRequestWithResponder:(id)a0 sendTypes:(id)a1 returnTypes:(id)a2;
- (id)makeRequestToDevice:(id)a0;
- (id)copyWithDevice:(id)a0;

@end
