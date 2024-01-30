@interface CADisplayAttributes : NSObject {
    struct EDIDAttributes { int dolbyVision; int pqEOTF; int bt2020YCC; int hdrStaticMetadataType1; BOOL legacyHDMI; unsigned int product_id; unsigned int manufacturer_id; unsigned int week_of_manufacture; unsigned int year_of_manufacture; unsigned int serial_number; } _edid_attributes;
}

@property (readonly) long long dolbyVision;
@property (readonly) long long pqEOTF;
@property (readonly) long long hdrStaticMetadataType1;
@property (readonly) long long bt2020YCC;
@property (readonly) BOOL legacyHDMIEDID;
@property (readonly) unsigned int manufacturerID;
@property (readonly) unsigned int productID;
@property (readonly) unsigned int weekOfManufacture;
@property (readonly) unsigned int yearOfManufacture;
@property (readonly) unsigned int serialNumber;

- (id).cxx_construct;
- (id)_initWithAttributes:(struct EDIDAttributes { int x0; int x1; int x2; int x3; BOOL x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })a0;

@end
