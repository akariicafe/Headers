@class _PSPeopleSuggestionsMetricsItemInternal;

@interface PSPeopleSuggestionsMetricsItem : NSObject

@property (readonly) _PSPeopleSuggestionsMetricsItemInternal *underlyingObject;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithId:(id)a0 model:(id)a1 transportBundleId:(id)a2 rank:(unsigned char)a3;

@end
