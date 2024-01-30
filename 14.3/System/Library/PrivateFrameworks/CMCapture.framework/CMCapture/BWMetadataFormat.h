@interface BWMetadataFormat : BWFormat {
    struct opaqueCMFormatDescription { } *_desc;
}

+ (void)initialize;
+ (id)formatWithMetadataFormatDescription:(struct opaqueCMFormatDescription { } *)a0;

- (struct opaqueCMFormatDescription { } *)formatDescription;
- (unsigned int)mediaType;
- (id)_initWithMetadataFormat:(struct opaqueCMFormatDescription { } *)a0;
- (void)dealloc;
- (id)description;
- (id)debugDescription;

@end
