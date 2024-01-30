@class NSMutableDictionary;

@interface GlobalDistortionCorrectionByPortType : NSObject {
    NSMutableDictionary *_gdcByPortType;
}

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)getParamsForPortType:(id)a0;

@end
