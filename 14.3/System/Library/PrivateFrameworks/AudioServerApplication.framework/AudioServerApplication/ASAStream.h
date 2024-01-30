@class NSString, NSArray, ASAAudioFormat;

@interface ASAStream : ASAObject

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isInput) BOOL input;
@property (readonly, nonatomic, getter=isOutput) BOOL output;
@property (readonly, nonatomic) unsigned int terminalType;
@property (readonly, nonatomic) unsigned int startingChannel;
@property (readonly, nonatomic) unsigned int latency;
@property (copy, nonatomic) ASAAudioFormat *virtualFormat;
@property (copy, nonatomic) ASAAudioFormat *physicalFormat;
@property (readonly, copy, nonatomic) NSArray *availableVirtualFormats;
@property (readonly, copy, nonatomic) NSArray *availablePhysicalFormats;
@property (readonly, copy, nonatomic) NSArray *controlObjectIDs;
@property (readonly, copy, nonatomic) NSArray *controls;
@property (readonly, nonatomic, getter=isVirtualFormatSettable) BOOL virtualFormatSettable;
@property (readonly, nonatomic, getter=isPhysicalFormatSettable) BOOL physicalFormatSettable;

- (void)setName:(id)a0;
- (unsigned int)latency;
- (id)name;
- (unsigned int)terminalType;
- (id)virtualFormat;
- (unsigned int)startingChannel;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (id)coreAudioClassName;
- (id)controlObjectIDs;
- (id)availableVirtualFormats;
- (id)physicalFormat;
- (id)availablePhysicalFormats;
- (void)setVirtualFormat:(id)a0;
- (void)setPhysicalFormat:(id)a0;

@end
