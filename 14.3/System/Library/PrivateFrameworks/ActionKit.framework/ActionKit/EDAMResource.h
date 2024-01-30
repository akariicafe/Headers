@class NSString, EDAMData, EDAMResourceAttributes, NSNumber;

@interface EDAMResource : FATObject

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *noteGuid;
@property (retain, nonatomic) EDAMData *data;
@property (retain, nonatomic) NSString *mime;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *active;
@property (retain, nonatomic) EDAMData *recognition;
@property (retain, nonatomic) EDAMResourceAttributes *attributes;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) EDAMData *alternateData;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
