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

- (void)dealloc;
- (id)defaultLabel;
- (id)defaultURLLabel;
- (id)defaultADRLabel;
- (BOOL)_handleUnknownTag:(id)a0 withValue:(id)a1;
- (void)cleanUpCardState;
- (void *)createRecordInSource:(void *)a0 outRecordType:(unsigned int *)a1;
- (id)genericLabel;
- (BOOL)importToGroup:(void *)a0 removeExistingProperties:(BOOL)a1;
- (BOOL)importToPerson:(void *)a0 removeExistingProperties:(BOOL)a1;
- (id)initWithData:(id)a0 watchdogTimer:(id)a1;
- (void)noteLackOfValueForImageData;
- (void)noteLackOfValueForProperty:(unsigned int)a0;
- (BOOL)parseUID;
- (void)setLocalRecordHasAdditionalProperties:(BOOL)a0;

@end
