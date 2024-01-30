@class SXJSONArray, NSString;
@protocol SXEdgeSpacing;

@interface SXInsertComponentLayout : NSObject <SXComponentLayout>

@property (nonatomic) unsigned long long ignoreDocumentMargin;
@property (retain, nonatomic) id<SXEdgeSpacing> margin;
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } columnRange;
@property (readonly, nonatomic) unsigned long long ignoreDocumentGutter;
@property (readonly, nonatomic) unsigned long long ignoreViewportPadding;
@property (readonly, nonatomic) struct _SXComponentContentInset { BOOL all; BOOL left; BOOL top; BOOL right; BOOL bottom; } contentInset;
@property (readonly, nonatomic) struct _SXConvertibleValue { double value; unsigned long long unit; } minimumHeight;
@property (readonly, nonatomic) struct _SXConvertibleValue { double value; unsigned long long unit; } suggestedHeight;
@property (readonly, nonatomic) struct _SXConvertibleValue { double value; unsigned long long unit; } maximumContentWidth;
@property (readonly, nonatomic) unsigned long long horizontalContentAlignment;
@property (readonly, nonatomic) id<SXEdgeSpacing> padding;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } minimumWidth;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } maximumWidth;

- (void).cxx_destruct;
- (id)initWithColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
