@class TSDFill, TSCH3DLightingModel, TSCH3DFillSetIdentifier;

@interface TSCHDEPRECATED3DFill : NSObject <TSSPropertyValueArchiving> {
    TSDFill *_fill;
    TSCH3DLightingModel *_lightingModel;
    TSCH3DFillSetIdentifier *_identifier;
}

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)convertToTSDFill;

@end
