@class NSData, NSMutableDictionary;

@interface ABVCardCardDAVParser : ABVCardParser {
    NSMutableDictionary *_unknownAttributes;
    BOOL _removeExistingProperties;
}

@property (readonly) BOOL localRecordHasAdditionalProperties;
@property (readonly) int lastCropRectX;
@property (readonly) int lastCropRectY;
@property (readonly) int lastCropRectWidth;
@property (readonly) int lastCropRectHeight;
@property (readonly, retain) NSData *lastCropRectChecksum;

- (BOOL)parseUID;
- (id)initWithData:(id)a0 watchdogTimer:(id)a1;
- (void)cleanUpCardState;
- (void)setLocalRecordHasAdditionalProperties:(BOOL)a0;
- (void)noteLackOfValueForProperty:(unsigned int)a0;
- (id)genericLabel;
- (id)defaultURLLabel;
- (BOOL)_handleUnknownTag:(id)a0 withValue:(id)a1;
- (void)noteLackOfValueForImageData;
- (id)defaultADRLabel;
- (BOOL)importToPerson:(void *)a0 removeExistingProperties:(BOOL)a1;
- (BOOL)importToGroup:(void *)a0 removeExistingProperties:(BOOL)a1;
- (void *)createRecordInSource:(void *)a0 outRecordType:(unsigned int *)a1;
- (id)defaultLabel;
- (void)dealloc;

@end
